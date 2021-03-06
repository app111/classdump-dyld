/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:05:43 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/AppleAccountSettings.bundle/AppleAccountSettings
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@protocol AADatePickerViewControllerDelegate;
@class UIToolbar, UIDatePicker;

@interface AADatePickerViewController : UIViewController {

	UIToolbar* _toolbar;
	UIDatePicker* _datePicker;
	<AADatePickerViewControllerDelegate>* _delegate;

}

@property (assign,nonatomic,__weak) <AADatePickerViewControllerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dismissAnimationFinished;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(id)date;
-(void)loadView;
-(void)setDate:(id)arg1 ;
-(void)showInView:(id)arg1 ;
-(void)selectedDateChanged:(id)arg1 ;
-(void).cxx_destruct;
-(void)dismiss:(id)arg1 ;
@end

