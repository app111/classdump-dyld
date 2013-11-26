/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:56 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@interface UIKeyboardBackdropCornerView : UIView {

	int _corners;
	float _radius;

}
-(void)drawInRect:(CGRect)arg1 ;
-(id)_generateBackdropMaskImage;
-(id)initWithFrame:(CGRect)arg1 withCorners:(int)arg2 ;
-(void)updateFrame:(CGRect)arg1 withCorners:(int)arg2 ;
@end
