/*
 * Copyright 2020 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/* This file is automatically generated using bindtool */

#include <pybind11/pybind11.h>
#include <pybind11/complex.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/fft/fft_vfc.h>

void bind_fft_vfc(py::module& m)
{
    using fft_vfc    = gr::fft::fft_vfc;


    py::class_<fft_vfc,gr::sync_block,
        std::shared_ptr<fft_vfc>>(m, "fft_vfc")

        .def(py::init(&fft_vfc::make),
           py::arg("fft_size"), 
           py::arg("forward"), 
           py::arg("window"), 
           py::arg("nthreads") = 1 
        )
        

        .def("set_nthreads",&fft_vfc::set_nthreads,
            py::arg("n") 
        )
        .def("nthreads",&fft_vfc::nthreads)
        .def("set_window",&fft_vfc::set_window,
            py::arg("window") 
        )
        .def("to_basic_block",[](std::shared_ptr<fft_vfc> p){
            return p->to_basic_block();
        })
        ;


} 
