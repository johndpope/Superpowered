// CPP to C glue code generated by Sweaty on Wed Jun 13 23:03:10 2018

// NO WARRANTIES ON PRODUCTION, for experiemental purposes only.
// TODO: Class member variable *MUST* be added manually
#include "/usr/local/Superpowered/SuperpoweredWhoosh.h"
#include "CLANG_SuperpoweredWhoosh.h"
void SuperpoweredWhoosh_enable(void * class_handler,bool flag)
{
  SuperpoweredWhoosh * real_class_handler = (SuperpoweredWhoosh *)class_handler;
  return real_class_handler->enable(flag);
}

void SuperpoweredWhoosh_setSamplerate(void * class_handler,unsigned int samplerate)
{
  SuperpoweredWhoosh * real_class_handler = (SuperpoweredWhoosh *)class_handler;
  return real_class_handler->setSamplerate(samplerate);
}

void SuperpoweredWhoosh_reset(void * class_handler)
{
  SuperpoweredWhoosh * real_class_handler = (SuperpoweredWhoosh *)class_handler;
  return real_class_handler->reset();
}

int SuperpoweredWhoosh_process(void * class_handler,float* input, float* output, unsigned int numberOfSamples)
{
  SuperpoweredWhoosh * real_class_handler = (SuperpoweredWhoosh *)class_handler;
  return real_class_handler->process(input,output,numberOfSamples);
}

void SuperpoweredWhoosh_delete(void * class_handler)
{
  delete (SuperpoweredWhoosh *)class_handler;
}

void SuperpoweredWhoosh_setFrequency(void * class_handler,float hz)
{
  SuperpoweredWhoosh * real_class_handler = (SuperpoweredWhoosh *)class_handler;
  return real_class_handler->setFrequency(hz);
}

void * SuperpoweredWhoosh_new(unsigned int samplerate)
{
  return (void*)(new SuperpoweredWhoosh(samplerate));
}