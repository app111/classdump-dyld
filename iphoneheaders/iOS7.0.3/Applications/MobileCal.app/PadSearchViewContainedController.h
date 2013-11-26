/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:01:13 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileCal.app/MobileCal
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MobileCal/MobileCal-Structs.h>
#import <MobileCal/SearchViewContainedController.h>
#import <UIKit/UISearchBarDelegate.h>

@interface PadSearchViewContainedController : SearchViewContainedController <UISearchBarDelegate> {

	BOOL _animatingViewDisappearing;

}

@property (assign,nonatomic) BOOL animatingViewDisappearing;              //@synthesize animatingViewDisappearing=_animatingViewDisappearing - In the implementation block
-(BOOL)animatingViewDisappearing;
-(void)setAnimatingViewDisappearing:(BOOL)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
@end
