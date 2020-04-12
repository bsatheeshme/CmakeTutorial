mkdir build
cd build
cmake .. --graphviz=ee
dot -Tps ee -o test.ps
