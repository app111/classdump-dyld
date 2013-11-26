/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:08 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIScrollView.h>

@class UIPageController;

@interface UIPageControllerScrollView : UIScrollView {

	UIPageController* _pageController;

}

@property (assign,nonatomic) UIPageController * pageController;              //@synthesize pageController=_pageController - In the implementation block
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setBounds:(CGRect)arg1 ;
-(void)_scrollViewWillBeginDragging;
-(void)_scrollViewDidEndDraggingWithDeceleration:(BOOL)arg1 ;
-(unsigned)_abuttedPagingEdges;
-(void)_scrollViewDidEndDecelerating;
-(void)_scrollViewAnimationEnded:(id)arg1 finished:(BOOL)arg2 ;
-(id)pageController;
-(void)setPageController:(id)arg1 ;
@end
