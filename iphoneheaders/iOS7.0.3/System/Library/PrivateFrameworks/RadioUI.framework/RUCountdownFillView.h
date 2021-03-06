/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:03 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <RadioUI/RadioUI-Structs.h>
#import <UIKit/UIView.h>

@class UIImage, UIColor;

@interface RUCountdownFillView : UIView {

	float _value;
	CGSize _shadowOffset;

}

@property (nonatomic,retain) UIImage * fillImage; 
@property (assign,nonatomic) float shadowBlur; 
@property (nonatomic,retain) UIColor * shadowColor; 
@property (assign,nonatomic) CGSize shadowOffset;                //@synthesize shadowOffset=_shadowOffset - In the implementation block
@property (assign,nonatomic) float value;                        //@synthesize value=_value - In the implementation block
+(Class)layerClass;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setValue:(float)arg1 ;
-(void)setShadowColor:(id)arg1 ;
-(void)setShadowOffset:(CGSize)arg1 ;
-(float)value;
-(CGSize)shadowOffset;
-(id)shadowColor;
-(void)setValue:(float)arg1 animated:(BOOL)arg2 ;
-(void)setShadowBlur:(float)arg1 ;
-(float)shadowBlur;
-(void)setFillImage:(id)arg1 ;
-(id)fillImage;
@end

