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

#include <gnuradio/blocks/add_const_cc.h>
// pydoc.h is automatically generated in the build directory
#include <add_const_cc_pydoc.h>

void bind_add_const_cc(py::module& m)
{
    using add_const_cc    = gr::blocks::add_const_cc;



    py::class_<add_const_cc, gr::sync_block, gr::block, gr::basic_block,
        std::shared_ptr<add_const_cc>>(m, "add_const_cc", D(add_const_cc))

        .def(py::init(&add_const_cc::make),
           py::arg("k"),
           D(add_const_cc,make)
        )

        .def("k",&add_const_cc::k,
            D(add_const_cc,k)
        )

        .def("set_k",&add_const_cc::set_k,
            py::arg("k"),
            D(add_const_cc,set_k)
        )
        ;


}
