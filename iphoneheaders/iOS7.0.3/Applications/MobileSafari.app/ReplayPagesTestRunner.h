/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:01:37 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MobileSafari/MobileSafari-Structs.h>
#import <MobileSafari/PurplePageLoadTestRunner.h>

@interface ReplayPagesTestRunner : PurplePageLoadTestRunner {

	_sFILE* _suiteFile;
	unsigned _attemptCount;
	unsigned _successCount;
	BOOL _eternal;

}

@property (assign,nonatomic) BOOL eternal;              //@synthesize eternal=_eternal - In the implementation block
-(bool)loadTestSuiteFile:(id)arg1 ;
-(void)startNextPage;
-(void)finishedTestPage:(id)arg1 ;
-(BOOL)eternal;
-(void)setEternal:(BOOL)arg1 ;
-(void)dealloc;
@end
