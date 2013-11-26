/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:46 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIAlertViewDelegate.h>

@class NSMutableArray;

@interface SKUIStoreDialogController : NSObject <UIAlertViewDelegate> {

	NSMutableArray* _alerts;
	NSMutableArray* _dialogs;

}
-(id)init;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
-(void)alertViewCancel:(id)arg1 ;
-(void)_performActionForDialog:(id)arg1 buttonIndex:(int)arg2 ;
-(void).cxx_destruct;
-(void)presentDialog:(id)arg1 ;
@end
