import QtQuick

Window {
  id: root

  width: 640
  height: 480

  visible: true

  title: qsTr("Song Player")

  Rectangle {
    id: topbar

    anchors {
      top: parent.top
      left: parent.left
      right: parent.right
    }

    height: 50
    color: "#5F8575"
  }

  Rectangle {
    id: mainSection

    anchors {
      top: topbar.bottom
      bottom: bottombar.top
      left: parent.left
      right: parent.right
    }

    color: "#1e1e1e"

    AudioInfoBox {
      id: firstSong

      anchors {
        verticalCenter: parent.verticalCenter
        left: parent.left
        right: parent.right
        margins: 20
      }

      songIndex: 0
      title: "Cat1 Song"
      authorName: "From Cute Cat1"
      imageSource: "assets/images/song1.jpg"
    }

    AudioInfoBox {
      id: secondSong

      anchors {
        verticalCenter: parent.verticalCenter
        left: parent.left
        right: parent.right
        margins: 20
      }

      songIndex: 1
      title: "Cat2 Song"
      authorName: "From Cute cat2"
      imageSource: "assets/images/song2.jpg"
    }

    AudioInfoBox {
      id: thirdSong

      anchors {
        verticalCenter: parent.verticalCenter
        left: parent.left
        right: parent.right
        margins: 20
      }

      songIndex: 2
      title: "Cat3 Song"
      authorName: "From Cute Cat 3"
      imageSource: "assets/images/song3.jpg"
    //  videoSource: "qrc:/Songplayer/assets/videos/video_1.avi"
    }

    AudioInfoBox {
      id: fourthSong

      anchors {
        verticalCenter: parent.verticalCenter
        left: parent.left
        right: parent.right
        margins: 20
      }

      songIndex: 3
      title: "Video"
      authorName: "strange user"
      videoSource: "assets/videos/video_1.avi"
    }
  }

  Rectangle {
    id: bottombar

    anchors {
      bottom: parent.bottom
      left: parent.left
      right: parent.right
    }

    height: 100
    color: "#333333"

    Row {
      anchors.centerIn: parent

      spacing: 20

      ImageButton {
        id: previousButton

        width: 64
        height: 64

        source: "assets/icons/previous_icon.png"

        onClicked: playerController.switchToPreviousSong()
      }

      ImageButton {
        id: playPauseButton

        width: 64
        height: 64

        source: playerController.playing ? "assets/icons/pause_icon.png" : "assets/icons/play_icon.png"

        onClicked: playerController.playPause()
      }

      ImageButton {
        id: nextButton

        width: 64
        height: 64

        source: "assets/icons/next_icon.png"

        onClicked: playerController.switchToNextSong()
      }
    }
  }

  QtObject {
    id: playerController

    property int currentSongIndex: 0
    property int songCount: 4
    property bool playing: false

    function playPause() {
      playing = !playing
    }

    function switchToPreviousSong() {
      if (currentSongIndex > 0) {
        currentSongIndex--
      } else {
        currentSongIndex = songCount - 1
      }
    }

    function switchToNextSong() {
      if (currentSongIndex + 1 >= songCount) {
        currentSongIndex = 0
      } else {
        currentSongIndex++
      }
    }
  }
}
