if [ -e build ]
then
    rm -R build
fi
mkdir build
mkdir build/objects
mkdir build/output
#build objects
cd build/objects
gcc -c -g -O ../../data_op/NodeData.c ../../data_op/PrimitiveData.c ../../array/cstring.c ../../array/memory_array.c ../../array/basic_string.c ../../log/log.c ../../morse.c ../../component.c -Wformat=0 -fPIC
#build output
gcc -shared * -o ../output/libMutils.so -lc
cd ../..