#include <iostream>
#include <Eigen/Core>

int main(){
    // Make vector for diagnal
    Eigen::Vector3d diag_vec;
    diag_vec << 1,2,3;

    auto diag_mat = Eigen::Matrix<3,3>(diag_vec.asDiagonal());
    std::cout << diag_mat << std::endl;
}