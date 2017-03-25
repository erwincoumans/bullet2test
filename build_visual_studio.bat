mkdir build
cd build
cmake -DBULLET_DIRECTORY=d:\develop\bullet3 -DBUILD_PYBULLET=OFF -DUSE_DOUBLE_PRECISION=ON -DCMAKE_BUILD_TYPE=Release -G "Visual Studio 14 2015" ..
start .


