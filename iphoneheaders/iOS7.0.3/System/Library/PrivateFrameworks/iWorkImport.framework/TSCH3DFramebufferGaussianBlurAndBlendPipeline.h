/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:51 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/TSCH3DFramebufferGaussianBlurPipeline.h>

@class TSCH3DGLFramebuffer;

@interface TSCH3DFramebufferGaussianBlurAndBlendPipeline : TSCH3DFramebufferGaussianBlurPipeline {

	float mBlendFactor;
	TSCH3DGLFramebuffer* mBlendTexture;

}

@property (nonatomic,retain) TSCH3DGLFramebuffer * blendTexture; 
@property (assign,nonatomic) float blendFactor; 
+(id)effectsArray;
-(void)updateShaderEffectsStates;
-(id)blendTexture;
-(float)blendFactor;
-(void)setBlendFactor:(float)arg1 ;
-(void)setBlendTexture:(id)arg1 ;
-(void)dealloc;
@end
