/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:51:31 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <AVFoundation/AVFoundation-Structs.h>
@class NSDictionary, NSObject, AVVideoComposition;

@interface AVVideoCompositionRenderContextInternal : NSObject {

	NSDictionary* _basisProperties;
	CGSize _size;
	CGAffineTransform _renderTransform;
	float _renderScale;
	SCD_Struct_AV54 _pixelAspectRatio;
	SCD_Struct_AV55 _edgeWidths;
	BOOL _highQualityRendering;
	NSDictionary* _clientRequiredPixelBufferAttributes;
	NSDictionary* _destinationDesiredPixelBufferAttributes;
	CFDictionaryRef _pixelAspectRatioDict;
	CFDictionaryRef _cleanApertureDict;
	SCD_Struct_AV54 _destinationPixelBufferDimensions;
	NSObject<OS_dispatch_queue>* _pixelBufferPoolQ;
	CVPixelBufferPoolRef _pixelBufferPool;
	AVVideoComposition* _videoComposition;

}
-(void)_willDeallocOrFinalize;
-(void)dealloc;
-(void)finalize;
@end

