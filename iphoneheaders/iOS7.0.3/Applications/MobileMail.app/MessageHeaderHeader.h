/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:01:16 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileMail.app/MobileMail
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIActionSheetDelegate.h>

@class MFMailMessage, MFSubjectWebBrowserView, DOMHTMLElement, UILabel, UIView, MessageViewStatusIndicatorManager, SeparatorLayer;

@interface MessageHeaderHeader : UIView <UIActionSheetDelegate> {

	MFMailMessage* _lastMessage;
	MFSubjectWebBrowserView* _subjectWebView;
	DOMHTMLElement* _subjectTextElement;
	UILabel* _dateLabel;
	UILabel* _mailboxLabel;
	UIView* _statusIndicatorView;
	MessageViewStatusIndicatorManager* _statusIndicatorManager;
	SeparatorLayer* _bottomSeparator;
	SeparatorLayer* _topSeparator;
	float _horizontalInset;
	int _displayStyle;
	unsigned _markedAsUnread : 1;
	unsigned _markedAsFlagged : 1;
	unsigned _senderIsVIP : 1;
	unsigned _isOutgoing : 1;
	unsigned _showMailboxName : 1;
	BOOL _bottomSeparatorDrawsFlushWithLeadingEdge;

}

@property (assign,nonatomic) float horizontalInset;                                      //@synthesize horizontalInset=_horizontalInset - In the implementation block
@property (assign,nonatomic) BOOL bottomSeparatorDrawsFlushWithLeadingEdge;              //@synthesize bottomSeparatorDrawsFlushWithLeadingEdge=_bottomSeparatorDrawsFlushWithLeadingEdge - In the implementation block
-(void)displayMessage:(id)arg1 withStyle:(int)arg2 ;
-(id)initWithFrame:(CGRect)arg1 displayStyle:(int)arg2 ;
-(void)setBottomSeparatorDrawsFlushWithLeadingEdge:(BOOL)arg1 ;
-(CGRect)subjectFrame;
-(id)bottomSeparator;
-(float)horizontalInset;
-(void)setHorizontalInset:(float)arg1 ;
-(BOOL)shouldDisplay;
-(void)allowUnreadStateToBeShown;
-(void)setMailboxNameVisible:(BOOL)arg1 ;
-(void)updateForRedisplayWithStatusIndicatorsVisible:(BOOL)arg1 ;
-(void)updateDateAndTime;
-(BOOL)bottomSeparatorDrawsFlushWithLeadingEdge;
-(void)_updateVeryLargeSubjectAllowed;
-(id)_subjectLineHTML:(BOOL)arg1 ;
-(id)_addSeparatorAtPosition:(float)arg1 ;
-(void)_flagStyleDidChange:(id)arg1 ;
-(void)_setSubjectText:(id)arg1 ;
-(void)_clearStatusIndicators;
-(id)contextForDDDetectionController;
-(CGRect)rectForStatusIndicator;
-(CGRect)layoutSubjectWithMailboxRect:(CGRect)arg1 statusRect:(CGRect)arg2 ;
-(CGRect)layoutDate:(id)arg1 withStatusRect:(CGRect)arg2 subjectRect:(CGRect)arg3 ;
-(CGRect)rectForMailboxNameWithDateRect:(CGRect)arg1 ;
-(float)contentHeightWithDateRect:(CGRect)arg1 subjectRect:(CGRect)arg2 mailboxRect:(CGRect)arg3 ;
-(void)_reloadFontSizes;
-(BOOL)usePadDisplayStyle;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)addSubview:(id)arg1 ;
-(void)layoutSubviews;
-(void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5 ;
-(void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2 ;
-(void)webView:(id)arg1 decidePolicyForNewWindowAction:(id)arg2 request:(id)arg3 newFrameName:(id)arg4 decisionListener:(id)arg5 ;
-(id)subject;
-(void)clearMessage;
-(void)setMessageFlags:(unsigned long long)arg1 ;
-(id)mailboxName;
-(id)dateSent;
-(void)_significantTimeChange:(id)arg1 ;
@end
