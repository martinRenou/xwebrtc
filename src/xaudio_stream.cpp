#include "xwebrtc/xaudio_stream.hpp"

template class XWEBRTC_API xw::xmaterialize<xwebrtc::xaudio_stream>;
template xw::xmaterialize<xwebrtc::xaudio_stream>::xmaterialize();
template class XWEBRTC_API xw::xtransport<xw::xmaterialize<xwebrtc::xaudio_stream>>;
template class XWEBRTC_API xw::xgenerator<xwebrtc::xaudio_stream>;
template xw::xgenerator<xwebrtc::xaudio_stream>::xgenerator();
template class XWEBRTC_API xw::xtransport<xw::xgenerator<xwebrtc::xaudio_stream>>;
