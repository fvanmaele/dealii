// ---------------------------------------------------------------------
//
// Copyright (C) 2007 - 2018 by the deal.II authors
//
// This file is part of the deal.II library.
//
// The deal.II library is free software; you can use it, redistribute
// it, and/or modify it under the terms of the GNU Lesser General
// Public License as published by the Free Software Foundation; either
// version 2.1 of the License, or (at your option) any later version.
// The full text of the license can be found in the file LICENSE.md at
// the top level directory of deal.II.
//
// ---------------------------------------------------------------------



// check FullMatrix::add(4). like the full_matrix_* tests, but use
// complex-valued matrices and vectors; this time we actually store complex
// values in them


#include "../tests.h"
#include "full_matrix_common.h"



template <typename number>
void
check()
{
  FullMatrix<std::complex<number>> m, n, o;
  make_complex_matrix(m);
  make_complex_matrix(n);
  make_complex_matrix(o);
  m.add(3.1415, n, 2.718, o);
  print_matrix(m);
}
