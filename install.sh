#!/bin/sh
system=`which rpm`

if test -z $system; then
#use deb
libre_sdk="http://mirrors.ustc.edu.cn/tdf/libreoffice/stable/6.0.5/deb/x86_64/LibreOffice_6.0.5_Linux_x86-64_deb_sdk.tar.gz"
libre="http://mirrors.ustc.edu.cn/tdf/libreoffice/stable/6.0.5/deb/x86_64/LibreOffice_6.0.5_Linux_x86-64_deb.tar.gz"
install_cmd="dpkg"

#install libreoffice
wget $libre
tar -zxvf "LibreOffice_6.0.5_Linux_x86-64_deb.tar.gz"
`"$install_cmd -i LibreOffice_6.0.5_Linux_x86-64_deb/DEBS/*.deb"`
#install libreoffice sdk
wget $libre_sdk
tar -zxvf "LibreOffice_6.0.5_Linux_x86-64_deb_sdk.tar.gz"
`"$install_cmd -i LibreOffice_6.0.5_Linux_x86-64_deb_sdk/DEBS/*.deb"`

else
#use rpm
libre="http://mirrors.ustc.edu.cn/tdf/libreoffice/stable/6.0.5/rpm/x86_64/LibreOffice_6.0.5_Linux_x86-64_rpm.tar.gz"
libre_sdk="http://mirrors.ustc.edu.cn/tdf/libreoffice/stable/6.0.5/rpm/x86_64/LibreOffice_6.0.5_Linux_x86-64_rpm_sdk.tar.gz"
install_cmd="rpm"

#install libreoffice
wget $libre
tar -zxvf "LibreOffice_6.0.5_Linux_x86-64_rpm.tar.gz"
`"$install_cmd -i LibreOffice_6.0.5_Linux_x86-64_rpm/RPMS/*.rpm"`
#install libreoffice sdk
wget $libre_sdk
tar -zxvf "LibreOffice_6.0.5_Linux_x86-64_rpm_sdk.tar.gz"
`"$install_cmd -i LibreOffice_6.0.5_Linux_x86-64_rpm_sdk/RPMS/*.rpm"`

fi

