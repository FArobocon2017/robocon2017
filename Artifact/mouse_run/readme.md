プログラムをダウンロードしたら、makeして実行してください。

実行ファイル（MouseRun）を実行すると、両輪が1000Hzで回転します。
車体前面の4つのセンサー全てが障害物を検知した場合、回転を停止します。
障害物が除去されると、再び回転します。

進行方向側のタクトスイッチを押すことで、プログラム終了します。



## ファイル構造

/home/pi/mouse_run

mouse_run 
|
├─Makefile
｜　
├─build
｜
├─include
｜　｜
｜　└─mouse.h
｜
└─src
　　｜
　　├─main.cpp
　　｜
　　├─motor.cpp
　　｜
　　├─sensor.cpp
　　｜
　　└─tact_switch.cpp
