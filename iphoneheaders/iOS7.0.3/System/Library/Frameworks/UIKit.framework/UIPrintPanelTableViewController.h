/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:12 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UITableViewController.h>

@class UIPrintPanelViewController;

@interface UIPrintPanelTableViewController : UITableViewController {

	UIPrintPanelViewController* _printPanelViewController;
	int _rangeRow;
	int _copiesRow;
	int _duplexRow;
	int _paperRow;
	BOOL _contactingPrinter;
	BOOL _canPrint;

}
-(void)dealloc;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(unsigned)supportedInterfaceOrientations;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)_updateSize;
-(id)initWithPrintPanelViewController:(id)arg1 ;
-(void)showCancelButton;
-(void)clearPrintPanelViewController;
-(void)setShowContactingPrinter:(BOOL)arg1 ;
-(void)_update:(BOOL)arg1 ;
-(void)showContacting;
-(void)updateCopies:(id)arg1 ;
-(void)updateDuplex:(id)arg1 ;
-(void)updatePageRange:(NSRange)arg1 ;
@end
