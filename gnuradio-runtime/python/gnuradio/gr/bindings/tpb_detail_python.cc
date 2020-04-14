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

#include <gnuradio/tpb_detail.h>
#include <gnuradio/block_detail.h>
// pydoc.h is automatically generated in the build directory
#include <tpb_detail_pydoc.h>

void bind_tpb_detail(py::module& m)
{

    using tpb_detail    = ::gr::tpb_detail;


    py::class_<tpb_detail,
        std::shared_ptr<tpb_detail>>(m, "tpb_detail", D(tpb_detail))

        .def(py::init<>(),D(tpb_detail,tpb_detail))


        .def("notify_upstream",&tpb_detail::notify_upstream,
            py::arg("d"),
            D(tpb_detail,notify_upstream)
        )
        .def("notify_downstream",&tpb_detail::notify_downstream,
            py::arg("d"),
            D(tpb_detail,notify_downstream)
        )
        .def("notify_neighbors",&tpb_detail::notify_neighbors,
            py::arg("d"),
            D(tpb_detail,notify_neighbors)
        )
        .def("notify_msg",&tpb_detail::notify_msg)
        .def("clear_changed",&tpb_detail::clear_changed)
        ;


} 
