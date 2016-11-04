# travis_qmake_gcc_cpp14_qt5_qtsvg

[![Travis CI logo](TravisCI.png)](https://travis-ci.org)

[![Build Status](https://travis-ci.org/richelbilderbeek/travis_qmake_gcc_cpp14_qt5_qtsvg.svg?branch=master)](https://travis-ci.org/richelbilderbeek/travis_qmake_gcc_cpp14_qt5_qtsvg)

This GitHub is part of [the Travis C++ Tutorial](https://github.com/richelbilderbeek/travis_cpp_tutorial).

![qrc_travis_qmake_gcc_cpp14_qt5_qtsvg](qrc_travis_qmake_gcc_cpp14_qt5_qtsvg.png)

The goal of this project is to have a clean Travis CI build, with specs:
 * Build system: `qmake`
 * C++ compiler: `gcc`
 * C++ version: `C++14`
 * Libraries: `STL` and `Qt5`, using the QtSvg module
 * Code coverage: none
 * Source: QDialog with Qt resource file

Less complex builds:
 * No QtSvg: [travis_qmake_gcc_cpp14_qt5](https://www.github.com/richelbilderbeek/travis_qmake_gcc_cpp14_qt5)
