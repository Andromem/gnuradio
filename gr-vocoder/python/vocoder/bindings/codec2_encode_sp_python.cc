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

#include <gnuradio/vocoder/codec2_encode_sp.h>
// pydoc.h is automatically generated in the build directory
#include <codec2_encode_sp_pydoc.h>

void bind_codec2_encode_sp(py::module& m)
{

    using codec2_encode_sp    = ::gr::vocoder::codec2_encode_sp;


    py::class_<codec2_encode_sp, gr::sync_decimator,
        std::shared_ptr<codec2_encode_sp>>(m, "codec2_encode_sp", D(codec2_encode_sp))

        .def(py::init(&codec2_encode_sp::make),
           py::arg("mode") = gr::vocoder::codec2::MODE_2400,
           D(codec2_encode_sp,make)
        )
        



        ;




}







