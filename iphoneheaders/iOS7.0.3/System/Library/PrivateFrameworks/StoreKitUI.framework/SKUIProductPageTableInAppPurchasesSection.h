/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:51 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <StoreKitUI/SKUIProductPageTableSection.h>

@class SKUIClientContext, SKUIColorScheme, SKUIProductPageTableExpandableHeaderView, NSArray, NSNumberFormatter;

@interface SKUIProductPageTableInAppPurchasesSection : SKUIProductPageTableSection {

	SKUIClientContext* _clientContext;
	SKUIColorScheme* _colorScheme;
	SKUIProductPageTableExpandableHeaderView* _headerView;
	NSArray* _inAppPurchases;
	NSNumberFormatter* _numberFormatter;

}

@property (nonatomic,retain) SKUIColorScheme * colorScheme;              //@synthesize colorScheme=_colorScheme - In the implementation block
-(void)setExpanded:(BOOL)arg1 ;
-(id)colorScheme;
-(void)setColorScheme:(id)arg1 ;
-(float)heightForCellInTableView:(id)arg1 indexPath:(id)arg2 ;
-(int)numberOfRowsInSection;
-(id)tableViewCellForTableView:(id)arg1 indexPath:(id)arg2 ;
-(id)headerViewForTableView:(id)arg1 ;
-(id)initWithInAppPurchases:(id)arg1 clientContext:(id)arg2 ;
-(void).cxx_destruct;
-(void)_reloadHeaderView;
@end
