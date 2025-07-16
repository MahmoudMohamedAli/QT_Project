import QtQuick
import GenerateRandomNumber

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")
    BackEnd{
    id: randnum

    }
    Column {
         anchors.centerIn: parent
         spacing: 10

         Text {
             text: "Random Number: " + randnum.randnum
             font.pixelSize: 20
         }
         Rectangle {
             width: 200
             height: 100
             color: "lightblue"

             MouseArea {
                 anchors.fill: parent  // Fills the entire rectangle
                 onClicked: {
                     console.log("Rectangle clicked!")
                     randnum.generate(1,10)
                 }
             }
         }
         Rectangle {
             width: 200
             height: 100
             color: "Darkblue"

             MouseArea {
                 anchors.fill:  parent  // Fills the entire rectangle
                 onClicked: {
                     console.log("Rectangle Stter !")
                     randnum.randnum = 89
                 }
             }
         }
     }
}
