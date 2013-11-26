/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:57 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <UIKit/UISearchField.h>
#import <iTunesStoreUI/SUDeferredUIView.h>

@class NSString;

@interface SUDeferredUISearchField : UISearchField <SUDeferredUIView> {

	int _deferredClearButtonMode;
	id _deferredFont;
	CGRect _deferredFrame;
	float _deferredPaddingLeft;
	float _deferredPaddingTop;
	NSString* _deferredPlaceholder;
	NSString* _deferredText;
	BOOL _isDeferringInterfaceUpdates;

}

@property (assign,getter=isDeferringInterfaceUpdates,nonatomic) BOOL deferringInterfaceUpdates; 
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(CGRect)frame;
-(id)text;
-(void)setFont:(id)arg1 ;
-(id)font;
-(void)setText:(id)arg1 ;
-(void)setPlaceholder:(id)arg1 ;
-(void)setPaddingTop:(float)arg1 paddingLeft:(float)arg2 ;
-(id)placeholder;
-(float)paddingTop;
-(void)setClearButtonMode:(int)arg1 ;
-(float)paddingLeft;
-(int)clearButtonMode;
-(BOOL)isDeferringInterfaceUpdates;
-(void)setDeferringInterfaceUpdates:(BOOL)arg1 ;
-(void)_saveCurrentStateAsDeferred;
-(void)_commitDeferredInterfaceUpdates;
@end
