cmake_minimum_required(VERSION 3.15)
project(A_Saving_Certificates_Management_System)

set(CMAKE_CXX_STANDARD 14)

add_executable(A_Saving_Certificates_Management_System main.cpp CertificateOwner.cpp CertificateOwner.h Date.cpp Date.h Certificate.cpp Certificate.h PlatinumCertificate.cpp PlatinumCertificate.h SilverCertificate.cpp SilverCertificate.h)