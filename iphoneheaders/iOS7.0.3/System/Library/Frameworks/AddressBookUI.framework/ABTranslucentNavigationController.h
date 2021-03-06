/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:51:43 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UINavigationController.h>

@protocol ABStyleProvider;
@interface ABTranslucentNavigationController : UINavigationController {

	BOOL _overridesNavigationBarInset;
	<ABStyleProvider>* _styleProvider;

}

@property (assign,nonatomic) BOOL overridesNavigationBarInset;               //@synthesize overridesNavigationBarInset=_overridesNavigationBarInset - In the implementation block
@property (nonatomic,retain) <ABStyleProvider> * styleProvider;              //@synthesize styleProvider=_styleProvider - In the implementation block
-(id)styleProvider;
-(void)setStyleProvider:(id)arg1 ;
-(BOOL)overridesNavigationBarInset;
-(void)setOverridesNavigationBarInset:(BOOL)arg1 ;
-(BOOL)_shouldNavigationBarInsetViewController:(id)arg1 ;
@end

