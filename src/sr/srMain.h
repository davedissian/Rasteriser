// rasteriser-lib
// Copyright (c) David Avedissian 2014-2015
#ifndef SRMAIN_H
#define SRMAIN_H

typedef struct
{
  uint width;
  uint height;
} srInitParams;

/// Initialise the rasteriser lib
///
/// @param A filled init parameters structure
void srInit(srInitParams* params);

/// Shut down the rasteriser lib
void srShutdown();

#endif /* SRMAIN_H */