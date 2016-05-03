#ifndef CAFFE_CONVERTOR_CAFFE_READER_H
#define CAFFE_CONVERTOR_CAFFE_READER_H

#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/io/zero_copy_stream_impl.h"
#include "google/protobuf/text_format.h"
#include "caffe_protobuf/caffe.pb.h"
#include <string>

namespace VCNN {

    class CaffeModel {


    };

    CaffeModel* parseFromFile(std::string prototxt_path,
                              std::string model_path,
                              std::string mean_path){
        CaffeModel* md = new CaffeModel();
        /*
         * Read!
         * */
        return md;
    }

}



#endif