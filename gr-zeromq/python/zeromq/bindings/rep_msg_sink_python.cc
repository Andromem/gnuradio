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

#include <gnuradio/zeromq/rep_msg_sink.h>
// pydoc.h is automatically generated in the build directory
#include <rep_msg_sink_pydoc.h>

void bind_rep_msg_sink(py::module& m)
{

    using rep_msg_sink    = ::gr::zeromq::rep_msg_sink;


    py::class_<rep_msg_sink, gr::block, gr::basic_block,
        std::shared_ptr<rep_msg_sink>>(m, "rep_msg_sink", D(rep_msg_sink))

        .def(py::init(&rep_msg_sink::make),
           py::arg("address"),
           py::arg("timeout") = 100,
           D(rep_msg_sink,make)
        )
        




        .def("last_endpoint",&rep_msg_sink::last_endpoint,
            D(rep_msg_sink,last_endpoint)
        )

        ;




}







