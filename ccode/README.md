# 1 - To compile C source codes:

> gcc fileName.c  
or  
> gcc -o execFileName fileName.c  
or  
> gcc -o execFileName -std=c11 fileName.c  
or  
> gcc -Wall -o execFileName -std=c11 fileName.c

## 2 - TO DO - A normal Unix installation
> ./configure  
> make  
> make test  
> make install  

#### 2.1 TO DO - List of all available configuration options:
./configure --help

#### 2.2 If you want to install curl in a different file hierarchy than /usr/local, specify that when running configure:  
> ./configure --prefix=/path/to/curl/tree  
#### 2.3 If you have write permission in that directory, you can do 'make install' without being root. An example of this would be to make a local install in your own home directory:  
> ./configure --prefix=$HOME  
> make  
> make install  
#### 2.4 The configure script always tries to find a working SSL library unless explicitly told not to. If you have OpenSSL installed in the default search path for your compiler/linker, you don't need to do anything special. If you have OpenSSL installed in /usr/local/ssl, you can run configure like:  
> ./configure --with-ssl  
#### 2.5 If you have OpenSSL installed somewhere else (for example, /opt/OpenSSL) and you have pkg-config installed, set the pkg-config path first, like this:  
> env PKG_CONFIG_PATH=/opt/OpenSSL/lib/pkgconfig ./configure --with-ssl  
#### 2.6 Without pkg-config installed, use this:  
> ./configure --with-ssl=/opt/OpenSSL  
#### 2.7 If you insist on forcing a build without SSL support, even though you may have OpenSSL installed in your system, you can run configure like this:  
> ./configure --without-ssl  
#### 2.8 If you have OpenSSL installed, but with the libraries in one place and the header files somewhere else, you have to set the LDFLAGS and CPPFLAGS environment variables prior to running configure. Something like this should work:  
> CPPFLAGS="-I/path/to/ssl/include" LDFLAGS="-L/path/to/ssl/lib" ./configure  
#### 2.9 If you have shared SSL libs installed in a directory where your run-time linker doesn't find them (which usually causes configure failures), you can provide this option to gcc to set a hard-coded path to the run-time linker:  
> LDFLAGS=-Wl,-R/usr/local/ssl/lib ./configure --with-ssl  