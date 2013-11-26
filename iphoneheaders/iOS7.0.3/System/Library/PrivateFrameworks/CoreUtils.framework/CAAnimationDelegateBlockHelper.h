/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:13 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@interface CAAnimationDelegateBlockHelper : NSObject {

	/*^block*/ id _animationDidStartBlock;
	/*^block*/ id _animationDidStopBlock;

}

@property (nonatomic,copy) id animationDidStartBlock;              //@synthesize animationDidStartBlock=_animationDidStartBlock - In the implementation block
@property (nonatomic,copy) id animationDidStopBlock;               //@synthesize animationDidStopBlock=_animationDidStopBlock - In the implementation block
-(void)dealloc;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)animationDidStart:(id)arg1 ;
-(/*^block*/ id)animationDidStartBlock;
-(void)setAnimationDidStartBlock:(/*^block*/ id)arg1 ;
-(/*^block*/ id)animationDidStopBlock;
-(void)setAnimationDidStopBlock:(/*^block*/ id)arg1 ;
@end
