/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:44 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Stocks/Stocks-Structs.h>
#import <libTelephonyUtilDynamic.dylib/NSURLConnectionDelegate.h>

@class NSURLRequest, NSURLConnection, NSMutableData;

@interface XMLHTTPRequest : NSObject <NSURLConnectionDelegate> {

	NSURLRequest* _request;
	NSURLConnection* _connection;
	NSMutableData* _rawData;
	xmlSAXHandler* _saxHandler;

}
+(id)uniqueQueryIDString;
+(void)setShouldGenerateOfflineData:(BOOL)arg1 ;
+(BOOL)shouldGenerateOfflineData;
+(void)appendDebugString:(id)arg1 ;
+(void)saveDebugString;
-(int)parseData:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)cancel;
-(void)loadRequest:(id)arg1 ;
-(BOOL)isLoading;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)failWithError:(id)arg1 ;
-(id)connectionForRequest:(id)arg1 delegate:(id)arg2 startImmediately:(BOOL)arg3 ;
-(void)willParseData;
-(void)didParseData;
-(id)_yahooDoppelganger_connectionForRequest:(id)arg1 delegate:(id)arg2 startImmediately:(BOOL)arg3 ;
-(id)aggregateDictionaryDomain;
-(void).cxx_destruct;
@end
