// (C) Copyright Mads Jensen 2016
//
// Use, modification and distribution are subject to the
// Boost Software License, Version 1.0 (See accompanying file
// LICENSE_1_0.txt or http://www.boost.org/LICENSE_1_0.txt)

#ifndef BOOST_GRAPH_GOMORY_HU_CUT_TREE_HPP
#define BOOST_GRAPH_GOMORY_HU_CUT_TREE_HPP

#include <type_traits> // std::is_same
#include <map>

#include <boost/graph/adjacency_list.hpp>
#include <boost/tuple/tuple.hpp>  // for tie
#include <boost/graph/graph_traits.hpp>
#include <boost/property_map/property_map.hpp>
#include <boost/property_map/shared_array_property_map.hpp>
#include <boost/graph/graph_utility.hpp>
#include <boost/graph/boykov_kolmogorov_max_flow.hpp>
#include <boost/graph/copy.hpp>

namespace boost {
    namespace detail {

        template<class Graph, class OutputIterator>
        void gomory_hu_cut_tree(Graph& g, OutputIterator edgeIterator){
            typedef typename graph_traits<Graph>::directed_category directed_category;
            typedef typename graph_traits<Graph>::vertex_descriptor Vertex;
            bool is_undirected = is_same<directed_category, undirected_tag>::value;
            if(!is_undirected)
                throw new bad_graph("graph must be undirected");

            std::vector<long> flowValues(num_vertices(g));
            typedef std::map<Vertex, Vertex> parents(num_vertices(g));

            // associative shared array
            // create new edges
        }
    }

    template<class Graph, class OutputIterator>
    void gomory_hu_cut_tree(Graph& g, OutputIterator cut_edges){
        ::detail::gomory_hu_cut_tree(g, cut_edges);
    }
}

#endif
