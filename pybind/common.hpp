#pragma once
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <pybind11/functional.h>

namespace py = pybind11;

namespace onionreq
{
  void
  Consensus_Init(py::module& mod);

  void
  OnionMaker_Init(py::module& mod);

  void
  Transport_Init(py::module& mod);

  void
  Junk_Init(py::module& mod);

  void
  Common_Init(py::module& mod);

  template <typename T>
  struct Holder
  {
    std::unique_ptr<T> impl;
    explicit Holder(T* _impl) : impl{_impl}
    {}
  };

}  // namespace onionreq
