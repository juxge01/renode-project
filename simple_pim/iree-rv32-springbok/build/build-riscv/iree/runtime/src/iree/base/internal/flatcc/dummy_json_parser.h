#ifndef DUMMY_JSON_PARSER_H
#define DUMMY_JSON_PARSER_H

/* Generated by flatcc 0.6.2 FlatBuffers schema compiler for C by dvide.com */

#include "flatcc/flatcc_json_parser.h"
#include "flatcc/flatcc_prologue.h"

static const char *iree_flatcc___IncludeWorkaround_parse_json_struct_inline(flatcc_json_parser_t *ctx, const char *buf, const char *end, void *struct_base);
static const char *iree_flatcc___IncludeWorkaround_parse_json_struct(flatcc_json_parser_t *ctx, const char *buf, const char *end, flatcc_builder_ref_t *result);
static const char *dummy_local_json_parser_enum(flatcc_json_parser_t *ctx, const char *buf, const char *end,
int *value_type, uint64_t *value, int *aggregate);
static const char *dummy_local_iree_flatcc_json_parser_enum(flatcc_json_parser_t *ctx, const char *buf, const char *end,
int *value_type, uint64_t *value, int *aggregate);
static const char *dummy_global_json_parser_enum(flatcc_json_parser_t *ctx, const char *buf, const char *end,
        int *value_type, uint64_t *value, int *aggregate);

static const char *iree_flatcc___IncludeWorkaround_parse_json_struct_inline(flatcc_json_parser_t *ctx, const char *buf, const char *end, void *struct_base)
{
    int more;
    flatcc_builder_ref_t ref;
    void *pval;
    const char *mark;
    uint64_t w;

    buf = flatcc_json_parser_object_start(ctx, buf, end, &more);
    while (more) {
        buf = flatcc_json_parser_symbol_start(ctx, buf, end);
        w = flatcc_json_parser_symbol_part(buf, end);
        if (w == 0x7265736572766564) { /* "reserved" */
            buf = flatcc_json_parser_match_symbol(ctx, (mark = buf), end, 8);
            if (mark != buf) {
                int32_t val = 0;
                static flatcc_json_parser_integral_symbol_f *symbolic_parsers[] = {
                        dummy_local_iree_flatcc_json_parser_enum,
                        dummy_global_json_parser_enum, 0 };
                pval = (void *)((size_t)struct_base + 0);
                buf = flatcc_json_parser_int32(ctx, (mark = buf), end, &val);
                if (mark == buf) {
                    buf = flatcc_json_parser_symbolic_int32(ctx, (mark = buf), end, symbolic_parsers, &val);
                    if (buf == mark || buf == end) goto failed;
                }
                flatbuffers_int32_write_to_pe(pval, val);
            } else {
                buf = flatcc_json_parser_unmatched_symbol(ctx, buf, end);
            }
        } else { /* "reserved" */
            buf = flatcc_json_parser_unmatched_symbol(ctx, buf, end);
        } /* "reserved" */
        buf = flatcc_json_parser_object_end(ctx, buf, end , &more);
    }
    return buf;
failed:
    return flatcc_json_parser_set_error(ctx, buf, end, flatcc_json_parser_error_runtime);
}

static const char *iree_flatcc___IncludeWorkaround_parse_json_struct(flatcc_json_parser_t *ctx, const char *buf, const char *end, flatcc_builder_ref_t *result)
{
    void *pval;

    *result = 0;
    if (!(pval = flatcc_builder_start_struct(ctx->ctx, 4, 4))) goto failed;
    buf = iree_flatcc___IncludeWorkaround_parse_json_struct_inline(ctx, buf, end, pval);
    if (ctx->error || !(*result = flatcc_builder_end_struct(ctx->ctx))) goto failed;
    return buf;
failed:
    return flatcc_json_parser_set_error(ctx, buf, end, flatcc_json_parser_error_runtime);
}

static inline int iree_flatcc___IncludeWorkaround_parse_json_as_root(flatcc_builder_t *B, flatcc_json_parser_t *ctx, const char *buf, size_t bufsiz, flatcc_json_parser_flags_t flags, const char *fid)
{
    return flatcc_json_parser_struct_as_root(B, ctx, buf, bufsiz, flags, fid, iree_flatcc___IncludeWorkaround_parse_json_struct);
}

static const char *dummy_local_json_parser_enum(flatcc_json_parser_t *ctx, const char *buf, const char *end,
        int *value_type, uint64_t *value, int *aggregate)
{
    /* Scope has no enum / union types to look up. */
    return buf; /* unmatched; */
}

static const char *dummy_local_iree_flatcc_json_parser_enum(flatcc_json_parser_t *ctx, const char *buf, const char *end,
        int *value_type, uint64_t *value, int *aggregate)
{
    /* Scope has no enum / union types to look up. */
    return buf; /* unmatched; */
}

static const char *dummy_global_json_parser_enum(flatcc_json_parser_t *ctx, const char *buf, const char *end,
        int *value_type, uint64_t *value, int *aggregate)
{
    /* Global scope has no enum / union types to look up. */
    return buf; /* unmatched; */
}

#include "flatcc/flatcc_epilogue.h"
#endif /* DUMMY_JSON_PARSER_H */
