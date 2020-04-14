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

#include <gnuradio/sync_decimator.h>
// pydoc.h is automatically generated in the build directory
#include <sync_decimator_pydoc.h>

void bind_sync_decimator(py::module& m)
{

    using sync_decimator    = ::gr::sync_decimator;


    py::class_<sync_decimator, gr::sync_block, gr::block, gr::basic_block,
        std::shared_ptr<sync_decimator>>(m, "sync_decimator", D(sync_decimator))



        .def("decimation",&sync_decimator::decimation,
            D(sync_decimator,decimation)
        )


        .def("set_decimation",&sync_decimator::set_decimation,
            py::arg("decimation"),
            D(sync_decimator,set_decimation)
        )


        .def("forecast",&sync_decimator::forecast,
            py::arg("noutput_items"),
            py::arg("ninput_items_required"),
            D(sync_decimator,forecast)
        )


        .def("general_work",&sync_decimator::general_work,
            py::arg("noutput_items"),
            py::arg("ninput_items"),
            py::arg("input_items"),
            py::arg("output_items"),
            D(sync_decimator,general_work)
        )


        .def("fixed_rate_ninput_to_noutput",&sync_decimator::fixed_rate_ninput_to_noutput,
            py::arg("ninput"),
            D(sync_decimator,fixed_rate_ninput_to_noutput)
        )


        .def("fixed_rate_noutput_to_ninput",&sync_decimator::fixed_rate_noutput_to_ninput,
            py::arg("noutput"),
            D(sync_decimator,fixed_rate_noutput_to_ninput)
        )

        ;



        py::module m_messages = m.def_submodule("messages");






        py::module m_thread = m.def_submodule("thread");







}







