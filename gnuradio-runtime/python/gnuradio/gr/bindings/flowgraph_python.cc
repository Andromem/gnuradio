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

#include <gnuradio/flowgraph.h>
// pydoc.h is automatically generated in the build directory
#include <flowgraph_pydoc.h>

void bind_flowgraph(py::module& m)
{

    using flowgraph    = ::gr::flowgraph;
    using endpoint    = ::gr::endpoint;
    using msg_endpoint    = ::gr::msg_endpoint;
    using edge    = ::gr::edge;
    using msg_edge    = ::gr::msg_edge;


    py::class_<flowgraph,
        std::shared_ptr<flowgraph>>(m, "flowgraph", D(flowgraph))

        .def(py::init<gr::flowgraph const &>(),           py::arg("arg0"),
           D(flowgraph,flowgraph,0)
        )


        .def("connect",(void (flowgraph::*)(gr::endpoint const &, gr::endpoint const &))&flowgraph::connect,
            py::arg("src"),
            py::arg("dst"),
            D(flowgraph,connect,0)
        )


        .def("disconnect",(void (flowgraph::*)(gr::endpoint const &, gr::endpoint const &))&flowgraph::disconnect,
            py::arg("src"),
            py::arg("dst"),
            D(flowgraph,disconnect,0)
        )


        .def("connect",(void (flowgraph::*)(gr::basic_block_sptr, int, gr::basic_block_sptr, int))&flowgraph::connect,
            py::arg("src_block"),
            py::arg("src_port"),
            py::arg("dst_block"),
            py::arg("dst_port"),
            D(flowgraph,connect,1)
        )


        .def("disconnect",(void (flowgraph::*)(gr::basic_block_sptr, int, gr::basic_block_sptr, int))&flowgraph::disconnect,
            py::arg("src_block"),
            py::arg("src_port"),
            py::arg("dst_block"),
            py::arg("dst_port"),
            D(flowgraph,disconnect,1)
        )


        .def("connect",(void (flowgraph::*)(gr::msg_endpoint const &, gr::msg_endpoint const &))&flowgraph::connect,
            py::arg("src"),
            py::arg("dst"),
            D(flowgraph,connect,2)
        )


        .def("disconnect",(void (flowgraph::*)(gr::msg_endpoint const &, gr::msg_endpoint const &))&flowgraph::disconnect,
            py::arg("src"),
            py::arg("dst"),
            D(flowgraph,disconnect,2)
        )


        .def("validate",&flowgraph::validate,
            D(flowgraph,validate)
        )


        .def("clear",&flowgraph::clear,
            D(flowgraph,clear)
        )


        .def("edges",&flowgraph::edges,
            D(flowgraph,edges)
        )


        .def("msg_edges",&flowgraph::msg_edges,
            D(flowgraph,msg_edges)
        )


        .def("calc_used_blocks",&flowgraph::calc_used_blocks,
            D(flowgraph,calc_used_blocks)
        )


        .def("topological_sort",&flowgraph::topological_sort,
            py::arg("blocks"),
            D(flowgraph,topological_sort)
        )


        .def("partition",&flowgraph::partition,
            D(flowgraph,partition)
        )

        ;


    py::class_<endpoint,
        std::shared_ptr<endpoint>>(m, "endpoint", D(endpoint))

        .def(py::init<>(),D(endpoint,endpoint,0))
        .def(py::init<gr::basic_block_sptr,int>(),           py::arg("block"),
           py::arg("port"),
           D(endpoint,endpoint,1)
        )
        .def(py::init<gr::endpoint const &>(),           py::arg("arg0"),
           D(endpoint,endpoint,2)
        )


        .def("block",&endpoint::block,
            D(endpoint,block)
        )


        .def("port",&endpoint::port,
            D(endpoint,port)
        )


        .def("identifier",&endpoint::identifier,
            D(endpoint,identifier)
        )

        ;


    py::class_<msg_endpoint,
        std::shared_ptr<msg_endpoint>>(m, "msg_endpoint", D(msg_endpoint))

        .def(py::init<>(),D(msg_endpoint,msg_endpoint,0))
        .def(py::init<gr::basic_block_sptr,pmt::pmt_t,bool>(),           py::arg("block"),
           py::arg("port"),
           py::arg("is_hier") = false,
           D(msg_endpoint,msg_endpoint,1)
        )
        .def(py::init<gr::msg_endpoint const &>(),           py::arg("arg0"),
           D(msg_endpoint,msg_endpoint,2)
        )


        .def("block",&msg_endpoint::block,
            D(msg_endpoint,block)
        )


        .def("port",&msg_endpoint::port,
            D(msg_endpoint,port)
        )


        .def("is_hier",&msg_endpoint::is_hier,
            D(msg_endpoint,is_hier)
        )


        .def("set_hier",&msg_endpoint::set_hier,
            py::arg("h"),
            D(msg_endpoint,set_hier)
        )


        .def("identifier",&msg_endpoint::identifier,
            D(msg_endpoint,identifier)
        )

        ;


    py::class_<edge,
        std::shared_ptr<edge>>(m, "edge", D(edge))

        .def(py::init<>(),D(edge,edge,0))
        .def(py::init<gr::endpoint const &,gr::endpoint const &>(),           py::arg("src"),
           py::arg("dst"),
           D(edge,edge,1)
        )
        .def(py::init<gr::edge const &>(),           py::arg("arg0"),
           D(edge,edge,2)
        )


        .def("src",&edge::src,
            D(edge,src)
        )


        .def("dst",&edge::dst,
            D(edge,dst)
        )


        .def("identifier",&edge::identifier,
            D(edge,identifier)
        )

        ;


    py::class_<msg_edge,
        std::shared_ptr<msg_edge>>(m, "msg_edge", D(msg_edge))

        .def(py::init<>(),D(msg_edge,msg_edge,0))
        .def(py::init<gr::msg_endpoint const &,gr::msg_endpoint const &>(),           py::arg("src"),
           py::arg("dst"),
           D(msg_edge,msg_edge,1)
        )
        .def(py::init<gr::msg_edge const &>(),           py::arg("arg0"),
           D(msg_edge,msg_edge,2)
        )


        .def("src",&msg_edge::src,
            D(msg_edge,src)
        )


        .def("dst",&msg_edge::dst,
            D(msg_edge,dst)
        )


        .def("identifier",&msg_edge::identifier,
            D(msg_edge,identifier)
        )

        ;



        m.def("make_flowgraph",&::gr::make_flowgraph,
            D(make_flowgraph)
        );


        m.def("dot_graph_fg",&::gr::dot_graph_fg,
            py::arg("fg"),
            D(dot_graph_fg)
        );


        py::module m_messages = m.def_submodule("messages");






        py::module m_thread = m.def_submodule("thread");







}







