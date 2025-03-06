#include <Python.h>
#include <stdio.h>

// Functions to read CPU, memory, and network stats
// ...

static PyObject* get_stats(PyObject* self, PyObject* args) {
    long cpu = get_cpu_usage();
    long mem = get_memory_usage();
    long net = get_network_usage();
    return Py_BuildValue("lll", cpu, mem, net);
}

// Python module setup
// ...
