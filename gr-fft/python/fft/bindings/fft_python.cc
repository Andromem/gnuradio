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

#include <gnuradio/fft/fft.h>

void bind_fft(py::module& m)
{
    using planner    = gr::fft::planner;
    using fft_complex    = gr::fft::fft_complex;
    using fft_real_fwd    = gr::fft::fft_real_fwd;
    using fft_real_rev    = gr::fft::fft_real_rev;


    py::class_<planner,
        std::shared_ptr<planner>>(m, "planner")

        .def(py::init<>())
        .def(py::init<gr::fft::planner const &>(),           py::arg("arg0") 
        )

        .def("mutex",&planner::mutex)
        ;


    py::class_<fft_complex,
        std::shared_ptr<fft_complex>>(m, "fft_complex")

        .def(py::init<int,bool,int>(),           py::arg("fft_size"), 
           py::arg("forward") = true, 
           py::arg("nthreads") = 1 
        )

        .def("get_inbuf",&fft_complex::get_inbuf)
        .def("get_outbuf",&fft_complex::get_outbuf)
        .def("inbuf_length",&fft_complex::inbuf_length)
        .def("outbuf_length",&fft_complex::outbuf_length)
        .def("set_nthreads",&fft_complex::set_nthreads,
            py::arg("n") 
        )
        .def("nthreads",&fft_complex::nthreads)
        .def("execute",&fft_complex::execute)
        ;


    py::class_<fft_real_fwd,
        std::shared_ptr<fft_real_fwd>>(m, "fft_real_fwd")

        .def(py::init<int,int>(),           py::arg("fft_size"), 
           py::arg("nthreads") = 1 
        )

        .def("get_inbuf",&fft_real_fwd::get_inbuf)
        .def("get_outbuf",&fft_real_fwd::get_outbuf)
        .def("inbuf_length",&fft_real_fwd::inbuf_length)
        .def("outbuf_length",&fft_real_fwd::outbuf_length)
        .def("set_nthreads",&fft_real_fwd::set_nthreads,
            py::arg("n") 
        )
        .def("nthreads",&fft_real_fwd::nthreads)
        .def("execute",&fft_real_fwd::execute)
        ;


    py::class_<fft_real_rev,
        std::shared_ptr<fft_real_rev>>(m, "fft_real_rev")

        .def(py::init<int,int>(),           py::arg("fft_size"), 
           py::arg("nthreads") = 1 
        )

        .def("get_inbuf",&fft_real_rev::get_inbuf)
        .def("get_outbuf",&fft_real_rev::get_outbuf)
        .def("inbuf_length",&fft_real_rev::inbuf_length)
        .def("outbuf_length",&fft_real_rev::outbuf_length)
        .def("set_nthreads",&fft_real_rev::set_nthreads,
            py::arg("n") 
        )
        .def("nthreads",&fft_real_rev::nthreads)
        .def("execute",&fft_real_rev::execute)
        ;


    m.def("malloc_complex",&gr::fft::malloc_complex,
        py::arg("size") 
    );
    m.def("free",&gr::fft::free,
        py::arg("b") 
    );
} 
