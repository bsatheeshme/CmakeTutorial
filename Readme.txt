mkdir build
cd build
cmake .. --graphviz=ee
make package
make install
dot -Tps ee -o test.ps
