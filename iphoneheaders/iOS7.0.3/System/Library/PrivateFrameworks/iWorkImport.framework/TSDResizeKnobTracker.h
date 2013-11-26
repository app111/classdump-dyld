/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:56 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDKnobTracker.h>
#import <iWorkImport/TSDDecorator.h>
#import <iWorkImport/TSDRepTracker.h>

@protocol TSDRepTrackerDelegate;
@class TSDRep, TSDLayout, TSUPointerKeyDictionary, CALayer, TSDHUDViewController, ;

@interface TSDResizeKnobTracker : TSDKnobTracker <TSDDecorator, TSDRepTracker> {

	BOOL mSnapEnabled;
	CGSize mMinimumSize;
	CGSize mMaximumSize;
	BOOL mCanMoveKnobAcrossOpposite;
	BOOL mShouldResizeFromCenter;
	TSDRep* mRepToMatch;
	CGPoint mSecondaryHUDPoint;
	CGAffineTransform mOriginalTransformInRoot;
	TSDLayout* mResizingLayout;
	TSUPointerKeyDictionary* mResizingLayoutsByRep;
	CGRect mBaseBounds;
	CGRect mLastNewBounds;
	BOOL mSnappedToAspectRatio;
	BOOL mBeganAlignmentOperation;
	CALayer* mGuideLayer;
	TSDHUDViewController* mSecondHUDController;
	<TSDRepTrackerDelegate>* mDelegate;
	BOOL mNeedsHUD;

}

@property (assign,nonatomic) BOOL snapEnabled; 
@property (assign,nonatomic) CGSize minimumSize; 
@property (assign,nonatomic) CGSize maximumSize; 
@property (assign,nonatomic) BOOL canMoveKnobAcrossOpposite; 
@property (nonatomic,retain) TSDRep * repToMatch; 
@property (assign,nonatomic) CGPoint secondaryHUDPoint; 
@property (assign,nonatomic) BOOL shouldResizeFromCenter; 
@property (assign,nonatomic) BOOL isInspectorDrivenTracking; 
-(BOOL)hasVerticalFlip;
-(BOOL)hasHorizontalFlip;
-(id)initWithRep:(id)arg1 knob:(id)arg2 ;
-(void)beginMovingKnob;
-(void)endMovingKnob;
-(void)changeDynamicLayoutsForReps:(id)arg1 ;
-(void)moveKnobToCanvasPosition:(CGPoint)arg1 ;
-(CGAffineTransform)resizeTransform;
-(void)p_hideHUD;
-(BOOL)shouldHideSelectionHighlight;
-(void)moveKnobToRepPosition:(CGPoint)arg1 ;
-(BOOL)shouldHideOtherKnobs;
-(void)constrainAndSnapByMovingKnobTo:(CGPoint)arg1 snappingToGuides:(BOOL)arg2 ;
-(void)constrainBetweenMaxAndMinSize;
-(id)currentGeometryForLayout:(id)arg1 ;
-(id)decoratorOverlayLayers;
-(CGRect)currentBoundsForStandardKnobs;
-(CGAffineTransform)transformInRootForStandardKnobs;
-(CGPoint)convertKnobPositionToUnscaledCanvas:(CGPoint)arg1 ;
-(id)resizingLayoutForRep:(id)arg1 ;
-(CGSize)currentSizeForLayout:(id)arg1 ;
-(void)p_updateHUD;
-(BOOL)allowHUDToDisplay;
-(CGAffineTransform)p_repTransformInRootForTransforming;
-(void)setCanMoveKnobAcrossOpposite:(BOOL)arg1 ;
-(BOOL)p_shouldApplyResizeToSiblingsOfRep;
-(void)p_cancelDelayedHUDAndGuides;
-(BOOL)p_isResizingFromCenter;
-(void)applyNewBoundsToRep:(id)arg1 ;
-(void)p_makeSiblingRepsPerformBlock:(/*^block*/ id)arg1 ;
-(void)p_updateGuideLayer;
-(void)p_showHUDAndGuides;
-(CGRect)p_simpleResizedRectByMovingKnobTo:(CGPoint)arg1 ;
-(BOOL)p_isMatchingSize;
-(id)repToMatch;
-(BOOL)p_isPreservingAspectRatio;
-(void)p_validateLayout;
-(void)applyNewBoundsToPrimaryRep;
-(void)p_hideGuideLayer;
-(BOOL)isMinimumSizeFixed;
-(id)hudLabelText;
-(CGPoint)secondaryHUDPoint;
-(BOOL)canCenterResize;
-(BOOL)shouldResizeFromCenter;
-(CGAffineTransform)transformForLayout:(id)arg1 ;
-(CGRect)i_baseBounds;
-(CGRect)i_lastNewBounds;
-(void)setShouldResizeFromCenter:(BOOL)arg1 ;
-(BOOL)snapEnabled;
-(void)setSnapEnabled:(BOOL)arg1 ;
-(BOOL)canMoveKnobAcrossOpposite;
-(void)setRepToMatch:(id)arg1 ;
-(void)setSecondaryHUDPoint:(CGPoint)arg1 ;
-(void)dealloc;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 ;
-(void)setMinimumSize:(CGSize)arg1 ;
-(CGSize)minimumSize;
-(CGSize)maximumSize;
-(void)setMaximumSize:(CGSize)arg1 ;
@end
