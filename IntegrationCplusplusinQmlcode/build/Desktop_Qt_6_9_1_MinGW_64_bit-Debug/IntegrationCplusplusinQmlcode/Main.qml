import QtQuick
import IntegrationCplusplusinQMLcode

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    MathOperation
    {
        id: operationmath
    }
    Rectangle {
        id: rect1
        width: 100
        height: 100
        color: "black"
        anchors.centerIn: parent  // ✅ Centers both horizontally and vertically

        MouseArea {
            anchors.fill: parent  // Makes the MouseArea cover the whole rectangle
            onClicked: {
                var result = 0
                console.log("Rectangle clicked!" )
                 result = operationmath.addop(2,3)
                console.log("Result is = ", result )

                rect1.color = "red"  // Example action

            }
    }

}
}

