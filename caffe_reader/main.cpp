#include "../config.h"
#include "./caffe_reader.h"

using namespace VCNN;
using namespace std;

int main(int argc, char* argv[]){
#ifdef DEVELOPMENT
    parseFromFile(CAFFE_PROTOTXT_PATH,CAFFE_MODEL_PATH, CAFFE_MEAN_BINARY_PATH);
#else
    int arg_channel = 1;
    string prototxt_file = argv[arg_channel++];
    string model_file = argv[arg_channel++];
    string mean_file = argv[arg_channel++];
    parseFromFile(prototxt_file,model_file,mean_file );
#endif
}
