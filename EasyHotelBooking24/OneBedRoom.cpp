#include "pch.h"
#include "OneBedRoom.h"

OneBedRoom::OneBedRoom(int rNr) : Room("OneBedRoom", rNr, 1, "FlatscreenTV, Bar, ...", 120, { "https://rimage.gnst.jp/livejapan.com/public/article/detail/a/00/00/a0000181/img/basic/a0000181_main.jpg?20201007180523&q=80&rw=750&rh=536", "https://d20aeo683mqd6t.cloudfront.net/articles/title_images/000/036/530/medium/1109715_15101412450036838546.jpg?2017", "https://photos.smugmug.com/Japan-2018/Tokyo/i-KQxvgmg/0/69292013/L/Tokyo-Japan-59-L.jpg" }) {
}

TwoBedRoom::TwoBedRoom(int rNr) : Room("TwoBedRoom", rNr, 2, "FlatscreenTV, Bar, Doublebed, ...", 200, { "https://upload.wikimedia.org/wikipedia/commons/2/27/Valve_Lobby_2016.jpg", "https://d3eti1f83v6uwr.cloudfront.net/-LXxIRPqUoDiUKBHb88RIUdMO64=/fit-in/1280x1280/uploads.thevendry.co/213/1560440272766_valve_1.jpg", "https://i.imgur.com/Tsr67iP.jpg" } ) {
}

ThreeBedRoom::ThreeBedRoom(int rNr) : Room("ThreeBedRoom", rNr, 3, "FlatscreenTv, Bar, Doublebed, SleepingCouch, ...", 300, { "https://thinkcomputers.org/wp-content/uploads/2018/08/62r2aa07me911.jpg", "https://successfulsoftware.files.wordpress.com/2009/07/oryx.jpg", "https://i.imgur.com/Dz1WI.jpg" } ) {
}

PresidentSuite::PresidentSuite(int rNr) : Room("PresidentSuite", rNr, 2, "4k-Screen,Der Geraet, Bar, Kingsizebed, Whirlpool, Butler, ...", 1500, { "https://upload.wikimedia.org/wikipedia/de/2/2f/D%C3%B6nerbude.JPG", "https://noktara.de/wp-content/uploads/Noktara-Ausgetrickst-Erdogan-umgeht-Auftrittsverbot-als-D%C3%B6nerverk%C3%A4ufer.jpg", "https://www.nuku.de/pictures/mobile/tandir-eine-der-besseren-doenerbuden-in-braunschweig-3963-1485.jpg" }) {
}

// Vector ist in main() von CppCLR_WinformsProjekt.cpp