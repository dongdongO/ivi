import QtQuick 2.2
import QtQuick.Window 2.1
import QtWayland.Compositor 1.0

WaylandCompositor {
    WaylandOutput {
        sizeFollowsWindow: true
        window: Window {
            width: 1024
            height: 600
            visible: true

            Item {
                id: container
                width: 1024
                height: 600
                anchors.centerIn: parent
                scale: 0.5

                Rectangle {
                    id: headUnitArea
                    width: 1024
                    height: 600
                    anchors.centerIn: parent
                }

                Rectangle {
                    id: pdcUnitArea
                    width: 500
                    height: 600
                    anchors.centerIn: parent
                    opacity: 0.5
                }
            }
        }
    }

    Component {
        id: chromeComponent
        ShellSurfaceItem {
            anchors.fill: parent
            onSurfaceDestroyed: destroy()
            onWidthChanged: handleResized()
            onHeightChanged: handleResized()
            function handleResized() {
                shellSurface.sendConfigure(Qt.size(width, height));
            }
        }
    }

    IviApplication {
        onIviSurfaceCreated: {
            var surfaceArea = iviSurface.iviId === 1111 ? pdcUnitArea : headUnitArea;
            var item = chromeComponent.createObject(surfaceArea, { "shellSurface": iviSurface } );
            item.handleResized();
        }
    }
}
