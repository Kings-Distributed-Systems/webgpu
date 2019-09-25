/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nwgpu v0.0.1
 */
#include "index.h"


#include "GPU.h"
#include "GPUDevice.h"
#include "GPUAdapter.h"
#include "GPUQueue.h"
#include "GPUFence.h"
#include "GPUBuffer.h"
#include "GPUTexture.h"
#include "GPUTextureView.h"
#include "GPUSampler.h"
#include "GPUBindGroupLayout.h"
#include "GPUPipelineLayout.h"
#include "GPUBindGroup.h"
#include "GPUShaderModule.h"
#include "GPURenderPipeline.h"
#include "GPUComputePipeline.h"
#include "GPUCanvasContext.h"
#include "GPUSwapChain.h"
#include "GPUCommandBuffer.h"
#include "GPUCommandEncoder.h"
#include "GPURenderPassEncoder.h"
#include "GPUComputePassEncoder.h"
#include "GPURenderBundle.h"
#include "GPURenderBundleEncoder.h"

//#include "DescriptorDecoder.h"

Napi::Object Init(Napi::Env env, Napi::Object exports) {

  GPU::Initialize(env, exports);
  GPUAdapter::Initialize(env, exports);
  GPUDevice::Initialize(env, exports);
  GPUQueue::Initialize(env, exports);
  GPUFence::Initialize(env, exports);
  GPUBuffer::Initialize(env, exports);
  GPUTexture::Initialize(env, exports);
  GPUTextureView::Initialize(env, exports);
  GPUSampler::Initialize(env, exports);
  GPUBindGroupLayout::Initialize(env, exports);
  GPUPipelineLayout::Initialize(env, exports);
  GPUBindGroup::Initialize(env, exports);
  GPUShaderModule::Initialize(env, exports);
  GPURenderPipeline::Initialize(env, exports);
  GPUComputePipeline::Initialize(env, exports);
  GPUCanvasContext::Initialize(env, exports);
  GPUSwapChain::Initialize(env, exports);
  GPUCommandBuffer::Initialize(env, exports);
  GPUCommandEncoder::Initialize(env, exports);
  GPURenderPassEncoder::Initialize(env, exports);
  GPUComputePassEncoder::Initialize(env, exports);
  GPURenderBundle::Initialize(env, exports);
  GPURenderBundleEncoder::Initialize(env, exports);

  
  return exports;
}

NODE_API_MODULE(addon, Init)
