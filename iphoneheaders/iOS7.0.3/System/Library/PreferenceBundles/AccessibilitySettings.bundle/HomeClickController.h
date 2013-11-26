/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:06:07 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <AccessibilitySettings/AccessibilitySettings-Structs.h>
#import <Preferences/PSListController.h>

@class NSTimer;

@interface HomeClickController : PSListController {

	int _flashCount;
	NSTimer* _flashTimer;
	NSTimer* _vibrationTimer;
	int _selectedRow;

}

@property (assign,nonatomic) int flashCount;                        //@synthesize flashCount=_flashCount - In the implementation block
@property (nonatomic,retain) NSTimer * flashTimer;                  //@synthesize flashTimer=_flashTimer - In the implementation block
@property (nonatomic,retain) NSTimer * vibrationTimer;              //@synthesize vibrationTimer=_vibrationTimer - In the implementation block
@property (assign,nonatomic) int selectedRow;                       //@synthesize selectedRow=_selectedRow - In the implementation block
-(void)setSelectedRow:(int)arg1 ;
-(void)setFlashCount:(int)arg1 ;
-(id)flashTimer;
-(void)setFlashTimer:(id)arg1 ;
-(id)vibrationTimer;
-(int)flashCount;
-(float)_homeClickSpeedFromSpecifierKey:(id)arg1 ;
-(void)_vibrateSelectedRow;
-(void)setVibrationTimer:(id)arg1 ;
-(void)_flashSelectedRow;
-(CFDictionaryRef)_vibrationPattern;
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)specifiers;
-(int)selectedRow;
@end
