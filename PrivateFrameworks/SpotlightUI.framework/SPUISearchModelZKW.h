/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpotlightUI.framework/SpotlightUI
 */

@interface SPUISearchModelZKW : SPUISearchModel {
    bool  _clearedQuerySuggestions;
    bool  _newQuery;
    NSObject<OS_dispatch_queue> * _queryProcessor;
    SPZKWSession * _session;
    bool  _shouldCacheResults;
}

@property bool clearedQuerySuggestions;
@property (nonatomic, retain) SPZKWSession *session;

- (void).cxx_destruct;
- (void)cacheZKWQuery;
- (void)clearQuerySuggestions;
- (bool)clearedQuerySuggestions;
- (void)dealloc;
- (id)init;
- (id)sections;
- (id)session;
- (void)setClearedQuerySuggestions:(bool)arg1;
- (void)setSession:(id)arg1;

@end
